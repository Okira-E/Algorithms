// ****************** queueType Class definition **********************
const int QueueSize=100;
class queueType
{
public:
	queueType();
	~queueType();
	bool isempty() const;
	bool isfull() const;
	void print() const;
	int getCount () const;
		
	void append(int e);
	void serve();
	int retrieve() const;
	
	int search(int e) const;
	

protected:
	int queue[QueueSize];
	int count, front, rear;
};