public class Main {
    public static void main(String[] args) {
        int a=8,b=8;
        if(a==b)
            System.out.println("İki sayı eşittir");
        else if (a<b) {
            System.out.println("B karakteri değeri A karakteri değerinden küçüktür.");
        }
        int secenek=3;
        int c=4,d=8;
        if (secenek==0)
            System.out.println("C+D="+(c+d));
        if (secenek==1)
            System.out.println("C/D="+(c/d));
        if (secenek==2)
            System.out.println("C-D="+(c-d));
        if (secenek==3)
            System.out.println("C*D="+(c*d));
    }
}