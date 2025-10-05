#include <iostream>
using namespace std;

namespace Joy {
    void print() {
        cout << "Joy's print function" << endl;
    }
}

namespace Alex {
    void print() {
        cout << "Alex's print function" << endl;
    }
}

int main() {
    Joy::print();   // Joy namespace থেকে কল
    Alex::print();  // Alex namespace থেকে কল
    return 0;
}


// | বিষয়   | ব্যাখ্যা                                                                    |
// | ------ | --------------------------------------------------------------------------- |
// | সমস্যা | একই নামের ভেরিয়েবল/ফাংশন বিভিন্ন জায়গায় ব্যবহার হলে কম্পাইলার বিভ্রান্ত হয় |
// | সমাধান | Namespace দিয়ে আলাদা আলাদা scope তৈরি করা                                   |
// | ফলাফল  | নামসংঘর্ষ এড়ানো যায়, কোড পরিষ্কার থাকে                                      |
