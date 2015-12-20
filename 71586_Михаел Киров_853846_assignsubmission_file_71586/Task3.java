import java.util.Arrays;
import java.util.Scanner;

public class Task3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter biggest pow");
		int pow = sc.nextInt();
		int[] arr = new int[pow+1];
		for(int i = 0; i <= pow ; i++){
			System.out.println("Enter a coef");
			arr[i] = sc.nextInt();
		}
		
		int[] result = new int[pow];
		int forLoop = pow;
		for(int i = 0; i < forLoop; i++){
			result[i] = pow*arr[i];
			pow--;
		}
		
		System.out.println(Arrays.toString(arr));
		System.out.println(Arrays.toString(result));

	}

}
