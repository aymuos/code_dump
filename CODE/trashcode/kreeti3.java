import java.util.ArrayList;

class kreeti3{
    public static void main(String[] args)
    {
        String str=args[1];
        int sum=0;
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)>='0' && str.charAt(i)<='9'){
                sum+=Integer.parseInt(String.valueOf(charAt(i)));
            }
        }
        List<Char> Alphabets=new ArrayList<Char>();

        str p1=String.valueOf(sum);
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)>='A' && str.charAt(i)<='z'){
                Alphabets.add(str.charAt(i));
                Collections.sort(Alphabets);
                }
        }
        String p2= Alphabets.stream().map(Object::toString)
        .collect(Collectors.joining(""));
        List<Char> numbers=new ArrayList<Char>();
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)>='0' && str.charAt(i)<='9'){
                numbers.add(str.charAt(i));
                Collections.sort(numbers);
                }
        }
        String p3= Alphabets.stream().map(Object::toString)
        .collect(Collectors.joining(""));
        System.out.println(p1+p2+p3);
}
}