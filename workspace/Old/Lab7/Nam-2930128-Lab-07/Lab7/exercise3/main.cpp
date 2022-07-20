#include <iostream>

int* insert(int arr[], int& size, int value, int position);
/*
   Inserts the given value at the specified position
   Creates a new array, copies all old value over adjusting indices as necessary
   Deletes the old array (arr)
   Updates the size
   Returns a pointer to the new array
 */
int* remove(int arr[], int& size, int position);
/*
   Removes the value at the given position
   Creates a new array, copies all old value over adjusting indices as necessary
   Deletes the old array (arr)
   Updates the size
   Returns a pointer to the new array
 */
int count(int arr[], int size, int target);
//returns a count of how many times the target value is in the array
void print(int arr[], int size);

int main() {
        int size, values, select, posi, value1, target;
        int* arr = nullptr;
        std::cout << "Input an initial size of the array: ";
        std::cin >> size;
        arr = new int[size];
        std::cout << "Input values: ";
        for(int i = 0; i < size; i++)
        {
                std::cin >> values;
                arr[i] = values;
        }

        do
        {
                std::cout << "Make a selection: \n" << "1) Insert \n" << "2) Remove \n" << "3) Count \n" << "4) Print \n" << "5) Exit \n" << "Choice: ";
                std::cin >> select;
                if(select == 1)
                {
                        std::cout << "Input a position to insert a value: ";
                        std::cin >> posi;
                        std::cout << "Input a value: ";
                        std::cin >> value1;
                        arr = insert(arr, size, value1, posi);
                }
                else if(select == 2)
                {
                        std::cout << "Input a position to remove a value: ";
                        std::cin >> posi;
                        arr = remove(arr, size, posi);
                }
                else if(select==3)
                {
                        std::cout << "Input a target: ";
                        std::cin >> target;
                        std::cout << "The array has " << count(arr, size, target) << " number of targets." << std::endl;
                }
                else if(select==4)
                {
                        print(arr, size);
                }
        }
        while(select != 5);

        std::cout << "Exits the program. \n";

        delete[] arr;
        return(0);
}

int *insert(int arr[], int &size, int value, int position) {
        int *n_arr = new int[size + 1];
        if (position >= size || position < 0) {
                std::cout << "invalid position" << std::endl;
                delete[] n_arr;
                return arr;
        } else {
                int index = 0;
                size++;
                for (int i = 0; i < size; i++) {
                        if (i == position) {
                                n_arr[i] = value;
                        } else {
                                if (index < 0) {
                                        index = 0;
                                }
                                n_arr[i] = arr[index];
                                index++;
                        }
                }
                return n_arr;
        }

}

int* remove(int arr[], int& size, int position) {
        int* n_arr = new int[size - 1];
        if (position >= size || position < 0) {
                std::cout << "invalid position" << std::endl;
                delete[] n_arr;
                return arr;
        } else {
                int index = 0;
                size--;
                for (int i = 0; i < size; i++) {
                        if (i == position) {
                                n_arr[i] = arr[++index];
                        } else {
                                n_arr[i] = arr[index];
                        }
                        index++;
                }
        }
        return n_arr;
}

int count(int arr[], int size, int target) {
        int count = 0;
        for (int i = 0; i < size; i++) {
                if (arr[i] == target) {
                        count++;
                }
        }
        return count;
}

void print(int arr[], int size) {
        std::cout << "[ ";
        for (int i = 0; i < size; i++) {
                std::cout << arr[i];
                if (i < size - 1) {
                        std::cout << ", ";
                }
        }
        std::cout << " ]" << std::endl;
}
