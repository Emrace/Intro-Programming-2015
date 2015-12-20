import java.util.Scanner;

public class Task1 {

	static boolean isPrime(int n){
		boolean isPrimeBool = true;
		for (int i = 2; i < n; i++){
			if (n % i == 0){
				isPrimeBool = false;
				
			}
			
		}
		return isPrimeBool;
		
	}
	
	static int nOfFib(int n){
		
		int[] arr = new int[39];
		arr[0] = 1;
		arr[1] = 1;
		for (int i = 0; i < 38-1; i++){
			arr[i + 2] = arr[i] + arr[i + 1];
		}
		return arr[n];
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Please enter a number between 7 and 39");
		int n;
		n = sc.nextInt();
		int sum = 0;
		if (n == 8 || n == 27){
			for (int i = 1; i <= n; i++){
				sum += i;
			}
			System.out.println(sum);
		}
		else if(isPrime(n)){
			System.out.println(nOfFib(n));
		}
		else{
			System.out.println("The number is not cube and is not Prime");
		}

	}

}
