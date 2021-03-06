#include <iostream>
#include "rushhour.h"
#include "state.h"

using namespace std;

void test1() {

    int positioning[] = {1,0,1,4,2,4,0,1};
    vector<int> start(positioning, positioning+8);
    State* s0 = new State(start);
    cout << (!s0->success()) << endl;
    State* s = new State(s0, 1, 1);

    cout << (s->prev == s0) << endl;
    cout << s0->pos[1] << " " << s->pos[1] << endl;

    s = new State(s,6,1);
    s = new State(s,1,-1);
    s = new State(s,6,-1);

    cout << s->equals(s0) << endl;

    s = new State(s0,1,1);
    s = new State(s,2,-1);
    s = new State(s,3,-1);
    s = new State(s,4,-1); s = new State(s, 4, -1);
    s = new State(s,5,-1); s = new State(s,5,-1); s = new State(s,5,-1);
    s = new State(s,6,1); s = new State(s, 6, 1); s = new State(s, 6, 1);
    s = new State(s,7,1); s = new State(s, 7, 1);
    s = new State(s,0,1); s = new State(s,0,1); s = new State(s,0,1);

    cout << (s->success()) << endl;
}

int main(){
    cout<<"TESTE 1:"<<endl;
    test1();

    cout<<"\n\nTESTE 2:"<<endl;
    RushHour *h = new RushHour();
    h->test2();

    cout<<"\n\nTESTE 3:"<<endl;
    h->test3();

    cout<<"\n\nTESTE 4:"<<endl;
    h->test4();

    cout<<"\n\nTESTE 5:"<<endl;
    h->solve22();

    cout<<"\n\nTESTE 6:"<<endl;
    h->solve1();

    cout<<"\n\nTESTE 7:"<<endl;
    h->solve40();

    return 0;
}
