import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class MyClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Theatre[] arr = new Theatre[4];
        for (int i = 0; i < 4; i++) {
            int tId = sc.nextInt();
            String tName = sc.next();
            int sCap = sc.nextInt();
            double tRate = sc.nextDouble();
            double thRating = sc.nextDouble();
            boolean bcnyAvail = sc.nextBoolean();
            arr[i] = new Theatre(tId, tName, sCap, tRate, thRating, bcnyAvail);
        }
        int id = sc.nextInt();
        double capacity = sc.nextDouble();
        String ans1 = findTheatreCategory(arr, id);
        Theatre[] ans2 = searchTheatreByCapacity(arr, capacity);
        if (ans1 != null) {
            System.out.println(ans1);
        } else {
            System.out.println("There is no Theatre with the given Theatre Id");
        }
        if (ans2 != null) {
            for (int i = 0; i < ans2.length; i++) {
                System.out.println(ans2[i].getTId());
            }
        } else {
            System.out.println("Only low capacity theatres available");
        }
        sc.close();
    }

    public static String findTheatreCategory(Theatre[] arr, int d) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i].getTId() == d) {
                if (arr[i].getBcnyAvail()) {
                    if (arr[i].getThRating() > 4) {
                        return "Ultra Premium";
                    } else if (arr[i].getThRating() >= 3 && arr[i].getThRating() <= 4) {
                        return "Premium";
                    } else {
                        return "Normal";
                    }
                } else {
                    return "Normal";
                }
            }
        }
        return null;
    }

    public static Theatre[] searchTheatreByCapacity(Theatre arr[], double d) {
        ArrayList<Theatre> arl = new ArrayList<Theatre>();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i].getSCap() > d) {
                arl.add(arr[i]);
            }
        }
        if (arl.size() == 0) {
            return null;
        }
        Theatre[] narr = arl.toArray(new Theatre[arl.size()]);
        Arrays.sort(narr, Theatre::compareTicketRate);
        return narr;

    }
}

class Theatre {
    private int tId;
    private String tNm;
    private int sCap;
    private double tRate;
    private double thRng;
    private boolean bcnyAvail;

    Theatre(int a, String b, int c, double d, double e,
            boolean f) {
        this.tId= a;
        this.tNm = b;
        this.sCap = c;
        this.tRate = d;
        this.tRng = e;
        this.bcnyAvail = f;
    }

    public int getTId() {
        return this.tId;
    }

    public int getSCap() {
        return this.sCap;
    }

    public double getTRate() {
        return this.tRate;
    }

    public static int compareTicketRate(Theatre a, Theatre b) {
        return (int) -(a.tRate - b.tRate);
    }

    public double getThRating() {
        return this.thRng;
    }

    public boolean getBAvail() {
        return this.bcnyAvail;
    }

}