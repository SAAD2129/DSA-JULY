import java.util.*;

public class Sample {
    
    public static void towerOfHanoi(int n, String src, String helper, String dest) {
        if (n == 1) {
            System.out.println("Transfer disk " + n + " from " + src + " to " + dest);
            return;
        }
        towerOfHanoi(n - 1, src, dest, helper);
        System.out.println("Transfer disk " + n + " from " + src + " to " + dest);
        towerOfHanoi(n - 1, helper, src, dest);

        // int n = 2;
        // towerOfHanoi(n, "S", "H", "D");
    }

    // public static void RevStr(String s, int ind,String newStr) {
    // if (ind == 0) {
    // newStr += s.charAt(ind);
    // return;
    // }
    // newStr += s.charAt(ind);
    // RevStr(s, ind - 1);
    // }
    public static int first = -1;
    public static int second = -1;

    public static void fLastOccurance(String s, int idx, char Element) {
        if (idx == s.length()) {
            System.out.println(first);
            System.out.println(second);
            return;
        } // 0 b
        char c = s.charAt(idx);
        if (c == Element) {
            if (first == -1) {
                first = idx;// 1
            } else {
                second = idx;
            }
        }
        fLastOccurance(s, idx + 1, Element);
    }

    public static boolean isSorted(int a[], int i, int n) {
        if (i == n - 1)
            return true;
        // if (a[i] < a[i + 1]) {
        // return isSorted(a, i + 1, n);
        // } else {
        // return false;
        // }
        if (a[i] >= a[i + 1])
            return false;

        return isSorted(a, i + 1, n);

    }

    public static void MoveAllX(String s, int ind, int ct, String newStr) {
        if (ind == s.length()) {
            for (int i = 0; i < ct; i++) {
                newStr += 'x';
            }
            System.out.println(newStr);
            return;
        }
        char c = s.charAt(ind);
        if (c == 'x') {
            ct++;
            MoveAllX(s, ind + 1, ct, newStr);

        } else {
            newStr += c;
            MoveAllX(s, ind + 1, ct, newStr);
        }

    }

    public static boolean[] map = new boolean[26];

    public static void RemoveDups(String s, int idx, String newStr) {
        if (idx == s.length()) {
            System.out.println(newStr);
            return;
        }
        char charAt = s.charAt(idx);
        if (map[charAt - 'a']) {
            RemoveDups(s, idx + 1, newStr);
        } else {
            newStr += charAt;
            map[charAt - 'a'] = true;
            RemoveDups(s, idx + 1, newStr);
        }
    }

    public static void SubSequene(String s, int idx, String newStr, HashSet<String> set) {
        if (idx == s.length()) {
            if (set.contains(newStr)) {
                return;
            } else {
                System.out.println(newStr);
                set.add(newStr);
            }
            return;
        }
        char idxChar = s.charAt(idx);
        SubSequene(s, idx + 1, newStr + idxChar, set);
        SubSequene(s, idx + 1, newStr, set);

    }

    public static String keypad[] = { ".", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxz" };

    public static void KeyPadCombinations(String s, int idx, String combination) {

        if (s.length() == idx) {
            return;
        }
        char character = s.charAt(idx);
        String map = keypad[character - '0'];
        for (int i = 0; i < map.length(); i++) {
            System.out.println(map.charAt(i));
        }

    }

    public static String RemoveAdjacent(String s, int idx, String newStr) {
        if (idx == s.length() - 1) {
            // System.out.println(newStr);
            return newStr;
        }
        char charAt = s.charAt(idx);
        // geeks
        if (s.charAt(idx) == s.charAt(idx + 1)) {
            return RemoveAdjacent(s, idx + 2, newStr);
        } else {
            newStr += charAt;
            return RemoveAdjacent(s, idx + 1, newStr);// abccbccba
        }
    }

    public static int Ways(int n, int m) {
        // if (n==0 || m==0) {
        // return 0;
        // }
        return (n == 1 || m == 1) ? 1 : Ways(n - 1, m) + Ways(n, m - 1);
    }

    public static int placeTiles(int n, int m) {
        if (n < m)
            return 1;
        if (n == m)
            return 2;

        return placeTiles(n - m, m) + placeTiles(n - 1, m);
    }

    public static int ArrSum(int arr[], int size, int sum) {
        // if (size<1) {
        // return sum;
        // }
        return ArrSum(arr, size - 1, sum) + arr[size - 1];// 1 2 3 4 5 6
        // 5
    }

    public static boolean keySearch(int A[], int key, int size) {
        if (size == 0) {
            return false;
        }
        if (A[size - 1] == key) {
            return true;
        }
        return keySearch(A, key, size - 1);
    }

    public static int binarySearch(int A[], int low, int key, int high) {
        if (low > high) {
            return -1;
        }
        int mid = (low + high) / 2;
        if (A[mid] == key)
            return mid;
        else if (A[mid] < key)
            return binarySearch(A, mid + 1, key, high);
        else
            return binarySearch(A, low, key, mid - 1);

    }

    public static void main(String[] args) {

        // 1. TOWER OF HANOI
        // int n = 3;
        // towerOfHanoi(n, "S", "H", "D");

        // 2. STRING FIRST & LAST OCCURANCE
        // String n = "abbcb";
        // fLastOccurance(n,0,'b');

        // 3. CHECKING IF ARRAY IS SORTED
        // int A[] = { 1, 2, 3, 4, 5 };
        // System.out.println(isSorted(A, 0, A.length));

        // 4. REMOVING ALL X'S
        // MoveAllX("axbxxcdx", 0, 0, "");

        // 5. REMOVING DUPLICATES
        // RemoveDups("abbcdeeeead", 0, "");

        // 6. SUBSEQUENCES OF A STRING
        // SubSequene("abc", 0, "");

        // For Unique Strings
        // HashSet<String> uniQueStrs=new HashSet<>();
        // SubSequene("aaa", 0, "", uniQueStrs);

        // Key pad Combinations
        // Remove Adjacent
        // System.out.println(RemoveAdjacent("abccbccba", 0, ""));
        // System.out.println(Ways(3, 4));
        int arr[] = { 1, 2, 3, 4, 5, 6 };
        int index = binarySearch(arr, 0, 132, arr.length - 1);
        System.out.println(index);
        // int sum = ArrSum(arr, arr.length, 0);
        // System.out.println(sum);
        // System.out.println(placeTiles(4, 4));

    }
}