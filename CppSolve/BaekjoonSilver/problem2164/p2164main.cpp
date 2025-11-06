#include <iostream>

using namespace std;

template <typename T>
struct Node
{
	T data;
	Node* prev_node_;
	Node* next_node_;
};
template <typename T>
class Queue
{
private:
	int queue_size_;
	Node<T>* head;
	Node<T>* tail;
public:
	Queue();
	~Queue();
	void push(T element);
	void pushBack();
	void pop();
	T front();
	T back();
	bool empty();
	int size();
};
template <typename T>
Queue<T>::Queue()
{
	queue_size_ = 0;
	Node<T>* tmp_head = new Node<T>;
	Node<T>* tmp_tail = new Node<T>;
	tmp_head->data = T();
	tmp_tail->data = T();
	tmp_head->next_node_ = tmp_tail;
	tmp_head->prev_node_ = tmp_head;
	tmp_tail->next_node_ = tmp_tail;
	tmp_tail->prev_node_ = tmp_head;
	head = tmp_head;
	tail = tmp_tail;
}
template <typename T>
Queue<T>::~Queue()
{
	Node<T>* tmp = head;
	Node<T>* del_node = tmp;
	while (tmp != tail)
	{
		del_node = tmp;
		tmp = tmp->next_node_;
		delete del_node;
	}
	delete tmp;
}
template <typename T>
void Queue<T>::push(T element)
{
	Node<T>* new_node = new Node<T>;
	new_node->data = element;
	new_node->next_node_ = tail;
	new_node->prev_node_ = tail->prev_node_;
	tail->prev_node_->next_node_ = new_node;
	tail->prev_node_ = new_node;
	queue_size_++;
}
template <typename T>
void Queue<T>::pushBack()
{
	if (queue_size_ < 2)
	{
		return;
	}
	Node<T>* target = head->next_node_;
	head->next_node_ = target->next_node_;
	target->next_node_->prev_node_ = head;
	tail->prev_node_->next_node_ = target;
	target->next_node_ = tail;
	target->prev_node_ = tail->prev_node_;
	tail->prev_node_ = target;
}
template <typename T>
void Queue<T>::pop()
{
	if (!empty())
	{
		Node<T>* del_node = head->next_node_;
		head->next_node_ = del_node->next_node_;
		del_node->next_node_->prev_node_ = head;
		delete del_node;
		queue_size_--;
	}
}
template <typename T>
T Queue<T>::front()
{
	return head->next_node_->data;
}
template <typename T>
T Queue<T>::back()
{
	return tail->prev_node_->data;
}
template <typename T>
bool Queue<T>::empty()
{
	if (queue_size_ == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template <typename T>
int Queue<T>::size()
{
	return queue_size_;
}

int main()
{
	int target_n;
	Queue<int> queue;
	cin >> target_n;
	if (target_n == 1)
	{
		cout << 1;
		return 0;
	}
	else
	{
		if (target_n % 2 == 0)
		{
			for (int i = 2;i <= target_n;i += 2)
			{
				queue.push(i);
			}
		}
		else
		{
			for (int i = 2;i <= target_n;i += 2)
			{
				queue.push(i);
			}
			queue.pushBack();
		}
		while (queue.size() > 1)
		{
			queue.pop();
			queue.pushBack();
		}
	}
	cout << queue.front();
	return 0;
}