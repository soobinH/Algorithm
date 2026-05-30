import java.util.Scanner;
class Solution {
    public static String solution(String my_string, String overwrite_string, int s) {
        return my_string.substring(0, s) + overwrite_string + my_string.substring(s + overwrite_string.length());
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String my_string = scanner.nextLine();
        String overwrite_string = scanner.nextLine();
        int s = scanner.nextInt();
        System.out.print(solution(my_string, overwrite_string, s));
    }
    
}