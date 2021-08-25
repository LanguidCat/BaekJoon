import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		
		String strIn = in.nextLine();
		in.close();
		
		StringTokenizer strOut = new StringTokenizer(strIn, " ");
		
		System.out.println(strOut.countTokens());
		
	}
}

