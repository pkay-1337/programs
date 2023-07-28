package Array;

class DynamicArray{
    private int arr[];
    private int count;

    public DynamicArray(int len){
        arr = new int[len];
    }

    public void print_array(){
        for(int i=0; i<count; i++){
            System.out.println(arr[i] + " len = " + arr.length);
        }
        System.out.println("------------------");
    }

    public void insert(int element){
        if(arr.length == count){
            int newArr[] = new int[2*count];

            for(int i=0; i<count; i++){
                newArr[i] = arr[i];
            }

            arr = newArr;
        }
        arr[count++] = element;
    }
    public static void main(String[] args) {
        DynamicArray numbers = new DynamicArray(3);
        numbers.insert(10);
        numbers.insert(20);
        numbers.insert(30);
        numbers.print_array();
        numbers.insert(40);
        numbers.print_array();
    }
}

