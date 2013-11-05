#define dNULL 0
#include <string>


blaseddStarbucks::blaseddStarbucks(){
    //tree = new BST<double, Entry>();
}
blaseddStarbucks:: ~blaseddStarbucks(){
}

Entry* blaseddStarbucks:: getNearest(double x, double y){
    
    if (tree.keyExists(y, x)) {
        Entry* actual = tree.find(y, x);
        return actual;
    }
    
    Entry* next = tree.next(y, x);
    Entry* prev = tree.prev(y, x);
    
    Entry* location = new Entry();
    location->x = x;
    location->y=y;
    
    double nextDist = distance(*next, *location);
    double prevDist = distance(*prev, *location);
    
    if(nextDist<prevDist)
        return next;
    return prev;
    
}

void blaseddStarbucks::build(Entry *c, int n){

//    int* indiciesToSkip   = new int[n];
//    int indexOfTheArray = 0;
//    for (int i=0; i<n-1; i++) {
//        bool foundAmatch = false;
//        Entry cur = c[i];
//        for (int j=i+1;j<n && !foundAmatch;j++){
//            Entry toCompare = c[j];
//            foundAmatch = false;
//            if( cur.x == toCompare.x &&
//               cur.y == toCompare.y){
//                indiciesToSkip[indexOfTheArray] = i;
//                foundAmatch = true;
//                indexOfTheArray++;
//            }
//        }
//        
//    }
//    indexOfTheArray = 0;
    for (int i = 0; i<n; i++) {
//        if (indiciesToSkip[indexOfTheArray]==i) {
//            indexOfTheArray++;
//        }
        //else{
            tree.add(c[i].y, c[i].x, c[i]);
        //}
    }
    
}