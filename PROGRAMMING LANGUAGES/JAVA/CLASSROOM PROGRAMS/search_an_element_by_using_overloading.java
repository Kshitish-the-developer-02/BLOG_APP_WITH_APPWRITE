public class search_an_element_by_using_overloading {

    static int search_an_element(int[] n, int k) {
        int key = k;
        for (int i = 0; i < n.length; i++) {
            if (key == n[i]) {
                return i;
            }

        }
        return 0;
    }

    static int search_an_element(char[] c, char ch) {
        int  key = ch;
        for (int i = 0; i < c.length; i++) {
            if (key == c[i]) {
                return i;
            }
        }
        return 0;

    }

    public static void main(String[] args) {
        int[] n = { 10, 20, 30, 40, 50 };
        int k = 20;
        int res1 = search_an_element(n, k);

        char[] c = { 'c', 'i', 'm', 'e' };
        char ch = 'm';
        int res2 = search_an_element(c, ch);

        System.out.println("elemnt found at: " + res1);
        System.out.println("character found at: " + res2);
    }

}
