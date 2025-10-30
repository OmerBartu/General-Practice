class SingleNode
{
private:
    int val;
    SingleNode *next;
public:
    SingleNode();
    SingleNode(int val);
    ~SingleNode();


    void print() const;


    // Getter methods
    SingleNode* getNext();
    int getVal();

    // Setter methods
    void setNext(SingleNode* next);
};


