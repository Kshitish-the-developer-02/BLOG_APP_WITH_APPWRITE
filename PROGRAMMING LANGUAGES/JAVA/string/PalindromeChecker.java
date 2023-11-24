public class PalindromeChecker {
    public static boolean isPalindrome(String str) {
        // Remove all non-alphanumeric characters and convert to lowercase
        String cleanedStr = str.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        
        // Compare the string with its reverse
        StringBuilder reversedStr = new StringBuilder(cleanedStr).reverse();
        return cleanedStr.equals(reversedStr.toString());
    }

    public static void main(String[] args) {
        String input = "racecar"; // Change this string to test different inputs
        boolean isPalindrome = isPalindrome(input);

        if (isPalindrome) {
            System.out.println(input + " is a palindrome.");
        } else {
            System.out.println(input + " is not a palindrome.");
        }
    }
}