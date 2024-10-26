#include <iostream> نیم سپیس std کا استعمال کرتے ہوئے ؛

ساخت نوڈ {int ڈیٹا ؛ نوڈ * اگلا ؛} ؛

کلاس لنکڈ لسٹ {private: Node * head ؛

عوامی: LinkedList () head (nullptr) {}

    سامنے والی جگہ کو خالی کریں(int data) {Node * newNode = new Node {data, head}; head = newNode;}

    Void insertAtEnd (int data) {Node * newNode = new Node {data, nullptr}; if (! head) {head = newNode;} ورنہ {Node * Temp = head; جبکہ (Temp-> Next) {Temp = Temp-> Next;} Temp-> Next = newNode;}}

    Void insertAtPosition (int ڈیٹا ، int پوزیشن) {if (پوزیشن <1) {cout <<پوزیشن> = 1 ہونی چاہیے ۔ <<endl; return;}
        اگر (پوزیشن = = 1) {insertAtFront (data) return;}
        نوڈ * newNode = new Node {data, nullptr}; نوڈ * Temp = head; for (int i = 1; Temp! = nullptr & & i <position-1; i + +) {Temp = Temp-> Next ؛}
        if (! Temp) {cout <<<"پوزیشن آؤٹ آف باؤنڈ" ۔ <<endl ؛ newNode کو حذف کریں ؛ لوٹائیں ؛}
        newNode-> Next = Temp-> Next ؛ Temp-> Next = newNode ؛}

    deleteFirstNode () {if (! head) {cout <<<"فہرست خالی ہے" کو کالعدم کریں ۔ <<endl; return;}
        نوڈ * ٹیمپ = ہیڈ ؛ ہیڈ = ہیڈ-> اگلا ؛ ٹیمپ کو حذف کریں ؛}  

    deleteLastNode () {if (! head) {cout <<"List is empty" کو کالعدم کریں ۔ <<endl; return;}
        if (! head-> next) {delete head; head = nullptr; return;}
        نوڈ * Temp = head ؛ جبکہ (Temp-> Next-> Next) {Temp = Temp-> Next;} Temp-> Next کو حذف کریں ؛ Temp-> Next = nullptr ؛}

    ڈیلیٹ ایٹ پوزیشن کو کالعدم کریں(int position) {if (position <1) {cout <<پوزیشن> = 1 ہونی چاہیے ۔ <<endl; return;}
        if (! head) {cout <<<"فہرست خالی ہے" ۔ <<endl; return;}
        اگر (پوزیشن = = 1) {deleteFirstNode () return;}
        نوڈ * Temp = head; for (int i = 1; Temp! = nullptr & & i <position-1; i + +) {Temp = Temp-> Next ؛}
        اگر (! Temp | |! Temp-> Next) {cout <<"حدود سے باہر پوزیشن" ۔ <<endl; return;}
        نوڈ * نوڈ ٹو ڈیلیٹ = ٹیمپ-> اگلا ؛ ٹیمپ-> اگلا = ٹیمپ-> اگلا-> اگلا ؛ نوڈ ٹو ڈیلیٹ کو حذف کریں ؛}

    void display () {if (! head) {cout <<<"List is empty". <<endl; return;}
        نوڈ * ٹیمپ = ہیڈ ؛ جبکہ (ٹیمپ) {cout <<Temp-> ڈیٹا <<"->" ؛ ٹیمپ = ٹیمپ