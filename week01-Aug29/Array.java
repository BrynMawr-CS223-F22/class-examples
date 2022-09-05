class Array {
  public static void main(String[] args) {
    int i, size = 0;
    int[] my_arr = new int[10];

    for (i = 0; i < 10; i++) {
        my_arr[i] = i;
        size++;
    }

    // set value at position 3 to 100
    my_arr[3] = 100;

    // print the number of array elements
    System.out.printf("array of %d items:\n", size);

    // print each element of the array
    for (i = 0; i < 10; i++) {
        System.out.printf("%d\n", my_arr[i]);
    }
  }
}
