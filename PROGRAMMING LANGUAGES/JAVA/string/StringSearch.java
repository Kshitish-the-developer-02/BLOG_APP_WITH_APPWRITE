import java.util.Scanner;

public class StringSearch {
    public static boolean searchWord(String str, String word) {
        // Convert both the string and word to lowercase for case-insensitive search
        str = str.toLowerCase();
        word = word.toLowerCase();
        
        // Split the string into an array of words
        String[] words = str.split(" ");

        // Iterate over the words and check if the word is found
        for (String w : words) {
            if (w.equals(word)) {
                return true; // Word found
            }
        }

        return false; // Word not found
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter the string and the word
        System.out.print("Enter a string: ");
        String str = scanner.nextLine();

        System.out.print("Enter a word to search: ");
        String word = scanner.nextLine();

        boolean found = searchWord(str, word);

        if (found) {
            System.out.println("The word '" + word + "' is found in the string.");
        } else {
            System.out.println("The word '" + word + "' is not found in the string.");
        }

        // scanner.close();
    }
}