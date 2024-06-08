#include<bits/stdc++.h>
using namespace std;
void display( vector<string> vec ){
    for (int i = 0; i < vec.size(); i++) {
        cout<<vec[i]<<" ";
    }


}


int main(){
    vector<string> vec;
    int n;

    cout<<"enter vector size:"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        vec.push_back(s);
    }

    display(vec);

}


/*
//template <class T>
//void display(vector<T> &v){
//    cout<<"displaying this vector:";
//    for (int i : v) {
//        cout<<i<<" ";
//
//    }
//}
//void display (vector<int> &v){
//    for(int i=0 ; i<v.size() ; i++){
//        cout<<v[i]<<" ";
//    }
//
//
//}

int main() {
    vector<int> vec;
   // int size;
    vector<char> vec2(4);
    vector <char> vec3(vec2);

    vector<int> vec4(6,3);

    vec2.push_back('1');
    display(vec2);



//    int element ;
//    cout<<"enter your element size:";
//    cin>>size;
//    for (int i = 0; i < size ; i++) {
//        cin>>element;
//        vec.push_back(element);
//    }
    //vec.insert(vec.begin(),100);
//    auto it = vec.begin();
//    vec.insert(it+1,100);
//
//    display(vec);
}

//    int t, n, count = 0;
//
//
//
//        vector<int> arr={2,3};
//        vector<int> :: iterator it;
//
//        arr.push_back(4);
//
//        arr.insert(arr.begin(),1);
//        arr.insert(arr.end(), 5);
//        it = arr.begin()+1;
//        cout<<*it;
//       /* for(int d:arr){
//            cout<<d<<" ";
//        }*/
//
//
//    }