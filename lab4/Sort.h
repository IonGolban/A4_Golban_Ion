class Sort

{
    // add data members

    int* vector ;
    int nr_elemente;
    
public:

    // add constuctors

    Sort(int nr_elemente, int min, int max) ;

    Sort(int* vector, int nr_elemente );

    Sort();

    Sort(int count, ...);

    Sort(char* c);

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

private:

    int convert(char* string);
    int Partition(int* vector, int min, int max,bool ascendent= false );
    void implQuickSort(int* vector, int min, int max,bool ascendent= false);


};