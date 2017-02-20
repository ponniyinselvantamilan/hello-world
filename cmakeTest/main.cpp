#include <iostream>
#include <pthread.h>
#include <signal.h>

using namespace std;

#if 0
//set 1

int main()
{
    cout << "Hello World!" << endl;

    int c = 5;
    int d = 6;


    const int* ptr = &c;

    int const *ptr1 = &d;

    //*ptr = 5;
    //*ptr1 = 7;

    int ccd = 8;

    ptr = &ccd;
    ptr1 = &ccd;

    cout << "ptr: " << *ptr << endl;
    cout << "ptr1: " << *ptr1 << endl;

    ptr = &d;
    cout << "ptr: " << *ptr << endl;

    cout << "ccd: " << ccd << endl;

    int *ptr4 = &ccd;

    *ptr4 = 10;
    cout << "ccd: " << ccd << endl;

    ptr4 = &c;

    cout << "ccd: " << ccd << endl;

    int * const ptr3 = &c;

    *ptr3 = ccd;

    return 0;
}
//set 1
#endif

void *pthreadHandler1(void *arg) {

    cout << "pthreadHandler1..." << endl;

}


int main(void) {

    pthread_t thread1 = 0;
    pthread_t thread2 = 0;

    int retCode = 0;

    retCode = pthread_create (&thread1, NULL, &pthreadHandler1, NULL);



    return 0;
}




