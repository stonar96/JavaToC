#include <stdio.h>
#include <stdlib.h>

long idCounter = 0;

typedef struct Article Article;

struct Article {
    long id;
    double price;
};

Article* newArticle(double price) {
    Article* this = (Article*) malloc(sizeof(Article));
    this->id = idCounter++;
    this->price = price;
    return this;
}

long getId(Article* this) {
    return this->id;
}

double getPrice(Article* this) {
    return this->price;
}

void setPrice(Article* this, double price) {
    this->price = price;
}

void print(Article* this) {
    printf("id: %ld, price: %.2lf\n", getId(this), getPrice(this));
}

int main(int argc, char* argv[]) {
    Article* anArticle = newArticle(9.99);
    Article* anotherArticle = newArticle(14.99);
    print(anArticle);
    print(anotherArticle);
    setPrice(anotherArticle, 19.99);
    print(anArticle);
    print(anotherArticle);
    free(anArticle);
    free(anotherArticle);
    return 0;
}
