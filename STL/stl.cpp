#include <bits/stdc++.h>
using namespace std;

void run_pair(){
    pair<int,int> a{4,9};
    cout<<a.second<<" "<<a.first<<endl;
    pair<pair<int,char>, string> b = {{3,'A'},"Hola"};
    cout<<b.first.second;
}
void run_vector(){

    vector<int> a = {1,3,5,4,9,6,8,0,1};
    vector<int> b= {1,2,3,0};

    // if( is_sorted(b.begin(),b.end())){
    //     cout<<" Sh";
    // }
    // else    cout<<"NH";
 

// cout<<a.at(5);
    // vector<int>::iterator itr1 = a.begin();
    // vector<int>::iterator itr2 = a.end();
    // itr2--;
    // cout<<*itr1<<"  :  "<<*itr2<<'\n';

    // itr1++;
    // itr2--;
    // cout<<*itr1<<"  :  "<<*itr2<<'\n';
    // vector<int> b(a.begin() +2,a.end());

    //for(auto x: b)  cout<<x<<" ";

    


}

void run_list(){

list<int> a ={4,5};

vector<int> b= {1,2,3};

cout<<b.back()<<endl;

a.push_front(2);
a.insert(a.begin(),1);

for(auto x:a)   cout<<x<<" ";


}
void run_stack(){    // LIFO

stack<int> a;

a.push(1);
a.push(2);
a.push(3);
a.push(0);
a.push(6);
a.push(9);

cout<<a.top()<<endl;

a.pop();

cout<<a.top()<<endl;
a.pop();

cout<<a.top()<<endl;

while(a.empty()==false){        // or while(!a.empty())
    cout<<a.top()<<" ";
    a.pop();
}

stack<int> s1, s2;
    s1.push(10);
    s1.push(0);
    s2.push(20);
    s2.push(2);
    s1.swap(s2);
    
    cout << "Top element of s1 after swap: " << s1.top() << endl;
    cout << "Top element of s2 after swap: " << s2.top() << endl;


}

void run_que(){

queue<int> a;

a.push(1);
a.push(1);
a.push(1);
a.push(1);

while(!a.empty()){
    cout<<a.front()<<" ";
    a.pop();
}


}

void run_pque(){

    priority_queue<int,vector<int>,greater<int>> a;

    a.push(5);
    a.push(15);
    a.push(3);
    a.push(4);
    a.push(6);

   

    while(!a.empty()){
        cout<<a.top()<<" ";
        a.pop();
    }
    
}

void run_set() {
    set<int> a = {40, 50, 16, 50};

    a.insert(10); // inserting 10
    a.insert(60); 
    a.insert(40); 
    a.insert(80); 

    // auto it = a.find(6);  // this will give the iterator where the number is found
    // if (it != a.end()) {
    //     cout << *it << " is present at index " << distance(a.begin(), it) << endl;
    // } else {
    //     cout << "Number not found in the set" << endl;
    // }

    
    for(auto x: a)  cout<<x<<" ";

    cout<<endl;

    auto itr  = a.upper_bound(80);
    cout<<"index : "<<distance(a.begin(),itr)<<" value : "<<*itr;


}


void run_multiset(){
    multiset<int> ms;
    ms.insert(0);
    ms.insert(0);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(5);

    auto it = ms.find(1);
    cout<<distance(ms.begin(),it)<<'\n';
    for(auto x:ms)  cout<<x<<" ";
}


void run_unorderset(){

    unordered_set<int> st;
    st.insert(1);
    st.insert(1);
    st.insert(1);
    st.insert(10);
    st.insert(12);
    st.insert(16);
    st.insert(5);
    st.insert(13);

    for(auto x: st) cout<<x<<" ";

}



void run_map(){

map<int,string> mpp;

mpp.insert({-1,"neg one"});
mpp[2]= "two";
mpp[1] = "one";
mpp[3]= "three";
mpp[0] = "zero";

for(auto x: mpp)    cout<<x.first<<"-->"<<x.second<<'\n';

}

void run_m_map(){

multimap<int,char> mp;

mp.insert({1,'a'});
mp.insert({9,'a'});
mp.insert({1,'d'});
mp.insert({2,'h'});
mp.insert({2,'e'});
mp.insert({2,'l'});
mp.insert({2,'l'});
mp.insert({2,'o'});
mp.insert({10,'6'});
mp.insert({15,'a'});
mp.insert({11,'a'});
mp.insert({1,'a'});


auto it = mp.equal_range(2);// gives you the pair of itr 

for(auto i = it.first;i!=it.second;i++){
    cout<<(*i).first<<" "<<(*i).second<<endl;
}





//for(auto x:mp)  cout<<x.first<<" "<<x.second<<endl;


}


void run_fun(){

vector<int> a = { 1,2,3,3,0,2,69,14};

cout<<count(a.begin(),a.end(),3);

auto max_ind = max_element(a.begin(),a.end());

cout<<"max no. "<<*max_ind<<" index: "<<max_ind - a.begin();

auto it = find(a.begin(),a.end(),3);
if(it == a.end())    cout<<"404 NOT FOUND";
else cout<<*it<<" found at index = "<<it - a.begin();

}


void run_nextpermutation(){

    string  s = "abc";

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

}
void run_prevpermutation(){

    string  s = "bca";

    do{
        cout<<s<<endl;
    }while(prev_permutation(s.begin(),s.end()));

}


void vsort(){
    vector<int> a = { 1,2,3,6,0,22};
    reverse(a.begin(),a.end());
    for(auto x: a)  cout<<x<<" ";
}


bool internal_cum(int e1,int e2){
// by defualt e2>e1 true now you are forcing it to change
    if(e1>e2)   return true;
    else    return false;

}
bool internal_cum_pair(pair<int,int> e1,pair<int,int> e2){

if(e2.second<e1.second) return true;
if(e2.second>e1.second) return false;
if(e2.first>e1.first)   return true;
else    return false;

}



void cum(){
    // comparators

    // vector<int> a= { 1,2,3,5,1,0,2,6,9,1};

    // sort(a.begin(),a.end());

    // cout<<" default sort\n";
    // for(int x:a)    cout<<x<<" ";

    // cout<<"\nsort after changed internal cum\n";
    // sort(a.begin(),a.end(),internal_cum);

    // for(int x:a)    cout<<x<<" ";

    // problem: sort a vector of pair int in desendding of 2nd and then ascending of first

    vector<pair<int,int>> a = {{1,6},{1,5},{2,6},{2,9},{3,9}};

    // ans = {{2,9},{3,9},{1,6},{2,6},{1,5}}

    //sort(a.begin(),a.end());// this sort just wrt the first ele

    sort(a.begin(),a.end(),internal_cum_pair);

    for(auto x:a)   cout<<"{"<<x.first<<" "<<x.second<<"}"<<endl;


}
int main()
{

cum();

return 0;
}