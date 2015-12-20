import java.util.Scanner;

public class Task2 {

	static int sumOfBomb(int[][] arr, int x0, int y0, int radius){
		int sum = 0;
		for(int i = 0; i < arr.length; i++){
			for(int j = 0; j < arr[0].length; j++){
				if( Math.pow((x0 - i), 2) + Math.pow((y0 - j), 2) <= Math.pow(radius, 2)){
					sum+= arr[i][j];
				}
			}
		}
		return sum;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[][] arr = new int[10][10];
		for(int i = 0; i < arr.length; i++){
			for(int j = 0; j < arr[0].length; j++){
				arr[i][j] = i*10+j;
			}
		}
		
		int x0OfBomb = sc.nextInt();
		int y0OFBomb = sc.nextInt();
		int radius = sc.nextInt();
		System.out.println(sumOfBomb(arr, x0OfBomb, y0OFBomb, radius));

	}
	
	

}
