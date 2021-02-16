import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.StringTokenizer;
import java.util.TreeMap;
import java.util.TreeSet;

/**
 *
 * @author Joan, N y R
 */

public class BaseJava {

  static PrintWriter out;
  static FastScanner fs;
  static int ans;

  static void inc(TreeMap<Integer, Integer> map, int pos) {
    map.put(pos, 1+map.getOrDefault(pos, 0));
  }

  static void dec(TreeMap<Integer, Integer> map, int pos) {
    if(map.get(pos)==1) 
      map.remove(pos);
    else 
      map.put(pos, map.get(pos)-1);
  }

  static class FastScanner {
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st=new StringTokenizer("");

    public String next() {
      while (!st.hasMoreElements())
        try {
          st = new StringTokenizer(br.readLine());
        } catch (IOException e) {
          e.printStackTrace();
        }
      return st.nextToken();
    }

    int nextInt() {
      return Integer.parseInt(next());
    }

    int[] readArray(int n) {
      int a[] = new int[n];
      for (int i = 0; i < n; ++i) 
        a[i] = nextInt();
      return a;
    }
  }

  public static void main(String[] args) {
    fs = new FastScanner();
    out = new PrintWriter(System.out);
    // Con el out nada más y luego con el close cerramos la impresión de la mejor manera
    out.close();
  }
}
