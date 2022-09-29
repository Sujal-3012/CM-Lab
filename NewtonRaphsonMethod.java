import java.util.Scanner;
public class Main
{
public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("Enter the coefficient of x^2");
    float a = in.nextInt();
    System.out.println("Enter the coefficient of x");
    float b = in.nextInt();
    System.out.println("Enter the constant");
    float c = in.nextInt();
    System.out.println("Enter the closest root :");
   
    float approx = in.nextInt();
   
    //Finding the derivate
    float coeffX = a * 2;
    float constant = b;
   
    System.out.println("upto which approximation : ");
    float appoximation = in.nextInt();
   
    //first pass ->
    float ans = approx - (fun_value(a , b, c , approx) / derivative_value(coeffX , constant ,approx));
    for (int i = 0 ; i <= appoximation ; i++ ){
         ans = ans - (fun_value(a, b , c ,ans) / derivative_value(coeffX , constant ,ans));
    }
   
    System.out.println(ans);
   
}

static float fun_value(float a , float b , float c , float point){
    return ((a * point * point) + (b * point) + c);
}

static float derivative_value(float coeffX ,float constant , float point){
    return ((coeffX * point ) + constant );
}
}
