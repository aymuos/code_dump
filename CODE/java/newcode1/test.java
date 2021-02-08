class test{
    public String processWords(String input1,int input2){
        //System.out.println("in");
        String s[] = input1.split(" ");
        int a = input2/10;
        int b = input2%10;
        a--;
        b--;
        
        
        String s1 = s[a];
        int len1 = s1.length();
        if(len1%2 == 1)len1 = len1/2 + 1;
        else len1 = len1/2;
        StringBuffer sb1 = new StringBuffer(s1.substring(0,len1));
        sb1.reverse();
        StringBuffer sb2;
        if(s1.length()%2 == 0)
        sb2 = new StringBuffer(s1.substring(len1));
        else  sb2 = new StringBuffer(s1.substring(len1-1));
        sb1.append(sb2.toString());
        
        String s2 = s[b];
        int len2 = s2.length();
        if(len2%2 == 1)len2 = len2/2 + 1;
        else len2 = len2/2;
        StringBuffer sb3 = new StringBuffer(s2.substring(0,len2));
        sb3.reverse();
        StringBuffer sb4;
        if(s2.length()%2 == 0)
        sb4 = new StringBuffer(s2.substring(len2));
        else sb4 = new StringBuffer(s2.substring(len2-1));
        sb3.append(sb4.toString());
        
        
        return sb1.toString() + " " + sb3.toString();
    }
}