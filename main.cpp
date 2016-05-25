#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <math.h>
#include<time.h>


#include "recursivo.h"
#include "memoized_cut_rod.h"
#include "bottom_up_cut_rod.h"
#include "extended_bottom_up_cut_rod.h"

using namespace std;




int main(int argc, const char * argv[]) {
    
    
    clock_t start, finish;
    double duration;
    start = clock();

    
    
    /* Cut-Rod recursivo
    int vec[] = {1,5,8,9,10,17,17,20,24,30};
    int valor=cut_rod_(vec, 50);
    finish= clock();
    //cout<<valor<<endl;
    */
    
    
    /* Memoized Cut-Rod
    int vec[]={1,5,8,9,10,17,17,20,24,30};
    int valor=memoized_cut_rod_(vec,10000);
    finish= clock();
    //cout<<valor<<endl;
    */
    
    ///*Bottom Up Cut-Rod
    int vec[]={1,5,8,9,10,17,17,20,24,30};
    int valor=bottom_up_cut_rod_(vec,10000);
    finish= clock();
    //cout<<valor<<endl;
    //*/
    
    
    
    /* Extended-Bottom-Up-Cut-Rod
    setear();
    int size=10000;
    clock_t start, finish;
    double duration;
    start = clock();

    Extended_Bottom_Up_Cut_Rod(size);
    finish= clock();
    cout<<Extended_Bottom_Up_Cut_Rod(size)<<endl;
    //Print_Cut_Rod_Solution(n);
    */
    
    duration = (double)(finish - start )/CLOCKS_PER_SEC;
    cout << "Tiempo : : " << duration <<"   segundos" <<endl;

    
    return 0;

}