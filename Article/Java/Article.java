public class Article {
    private static long idCounter = 0;
    private final long id;
    private double price;

    public Article(double price) {
        id = idCounter++;
        this.price = price;
    }

    public long getId() {
        return id;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public void print() {
        System.out.println("id: " + getId() + ", price: " + getPrice());
    }

    public static void main(String[] args) {
        Article anArticle = new Article(9.99);
        Article anotherArticle = new Article(14.99);
        anArticle.print();
        anotherArticle.print();
        anotherArticle.setPrice(19.99);
        anArticle.print();
        anotherArticle.print();
    }
}
