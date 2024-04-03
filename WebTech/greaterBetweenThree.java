public class greaterBetweenThree {
    public static void main(String[] args) {
        int num1=5, num2=10, num3 = 30;
        if(num1>num2 && num1>num3) 
            System.out.println(num1 + " is the greatest");
        if(num2>num1 && num2>num3) 
            System.out.println(num2 + " is the greatest");
        else 
            System.out.println(num3 + " is the greatest");
    }
}