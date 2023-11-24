import java.util.Scanner;

public class vowel_conconant {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of characters: ");
        int size = scanner.nextInt();

        char[] charArray = new char[size];
        System.out.println("Enter the characters:");

        for (int i = 0; i < size; i++) {
            charArray[i] = scanner.next().charAt(0);
        }

        System.out.println("Vowels: ");
        for (char c : charArray) {
            if (isVowel(c)) {
                System.out.print(c + " ");
            }
        }

        System.out.println("\nConsonants: ");
        for (char c : charArray) {
            if (!isVowel(c)) {
                System.out.print(c + " ");
            }
        }
    }

    public static boolean isVowel(char c) {
        char lowerCase = Character.toLowerCase(c);
        return lowerCase == 'a' || lowerCase == 'e' || lowerCase == 'i' || lowerCase == 'o' || lowerCase == 'u';
    }
}