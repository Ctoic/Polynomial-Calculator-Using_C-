#include<iostream>
#include<cmath>
using namespace std;

class Polynomial {
private:
	class Term {
	public:
		int exponent;
		int cofficient;
		Term* next;

		Term()
		{
			exponent = 0;
			cofficient = 0;
			next = NULL;
		}


	};

	Term* head;
	int size;

public:
	Polynomial() {
		head = NULL;
		size = 0;

	}
	~Polynomial()
	{
		Term* Delet = new Term;
		Term* Nxt = new Term;

		while (Delet != NULL)
		{
			Nxt = Delet->next;

			delete Delet;
			Delet = NULL;

		}
		delete Nxt;
		Nxt = NULL;
	}


	void input()
	{
		// int in_size = 0; 

		cout << "Enter the size :" << endl;
		cin >> size;


		for (int i = 1; i <= size; i++)
		{
			Term* t = new Term;
			cout << "Enter Cofficient :" << i << endl;
			cin >> t->cofficient;

			cout << "Enter Exponent : " << i << endl;
			cin >> t->exponent;

			if (head == NULL)
			{
				t->next = NULL;
			}
			else {
				t->next = head;

			}
			head = t;

		}

		Simplify();
		sort();
	}

	void Print()
	{
		Term* temp = head;
		if (temp->exponent != 0)
			cout << temp->cofficient << "X^" << temp->exponent << " ";

		temp = temp->next;

		while (temp != NULL)
		{

			if (temp->cofficient >= 0 && temp->exponent != 0)
				cout << '+' << temp->cofficient << "X^" << temp->exponent << " ";

			else if (temp->exponent != 0)
				cout << temp->cofficient << "X^" << temp->exponent << " ";

			temp = temp->next;
		}
		return;
	}

	void Simplify()
	{
		Term* t1 = head;

		bool Delete = false;


		while (t1->next != NULL)
		{
			Term* t = t1;
			Term* t2 = t1->next;

			while (t2 != NULL)

			{
				Delete = false;
				if (t1->exponent == t2->exponent)
				{
					t1->cofficient += t2->cofficient;
					t->next = t2->next;
					Delete = true;
					size--;

				}
				if (!Delete)
				{
					t2 = t2->next;
					t = t->next;

				}
				else
				{
					t2 = t->next;

				}
			}
			if (t1->next == NULL)
			{
				break;


			}
			t1 = t1->next;
		}
	}
	void sort()
	{
		Term* t4 = head;
		while (t4->next != NULL)
		{
			Term* t2 = t4->next;
			while (t2 != NULL)
			{
				if (t2->exponent <= t4->exponent)
				{
					int e = t4->exponent;
					int c = t4->cofficient;

					t4->cofficient = t2->cofficient;
					t4->exponent = t2->exponent;

					t2->cofficient = c
						;
					t2->exponent = e;

				}
				t2 = t2->next;

			}
			t4 = t4->next;


		}
	}

	Polynomial operator+(Polynomial& r)
	{
		Polynomial poly;

		Term* t1 = head;
		Term* t2 = r.head;

		while (t2 != NULL)
		{
			poly.size++;
			Term* t3 = new Term;
			t3->cofficient = t2->cofficient;
			t3->exponent = t2->exponent;

			if (poly.head == NULL)
			{
				t3->next = NULL;

			}
			else
			{
				t3->next = poly.head;

			}
			poly.head = t3;
			t2 = t2->next;

		}


		while (t1 != NULL)

		{
			poly.size++;
			Term* t3 = new Term;
			t3->cofficient = t1->cofficient;
			t3->exponent = t1->exponent;
			if (poly.head == NULL)
			{
				t3->next = NULL;

			}
			else
			{
				t3->next = poly.head;

			}
			poly.head = t3;
			t1 = t1->next;

		}


		poly.Simplify();
		poly.sort();

		return poly;

	}

	void operator=(const Polynomial& r)
	{
		size = r.size;
		Term* t2 = r.head;
		while (t2 != NULL)

		{
			Term* t1 = new Term;
			t1->cofficient = t2->cofficient;
			t1->exponent = t2->exponent;
			if (head == NULL)
			{
				t1->next = NULL;

			}
			else
			{
				t1->next = head;

			}
			head = t1;
			t2 = t2->next;
		}

	}

	Polynomial operator*(Polynomial& r)
	{
		Polynomial poly;
		Term* t1 = r.head;

		while (t1 != NULL)

		{
			Term* t2 = head;

			while (t2 != NULL)
			{
				Term* t3 = new Term;
				t3->cofficient = t1->cofficient * t2->cofficient;
				t3->exponent = t1->exponent * t2->exponent;

				if (poly.head == NULL)
				{
					t3->next = NULL;

				}
				else
				{
					t3->next = poly.head;

				}
				poly.head = t3;
				t2 = t2->next;

			}
			t1 = t1->next;
			  
		}
		return poly;


	}

	void operator-(int num)
	{
		Term* t = head;
		int total = 0;
		while (t != NULL)
		{
			total += t->cofficient * pow(num, t->exponent);
			t = t->next;


		}
		cout << "After Evaluation : " << total << endl;

	}



};


int main()
{
	Polynomial poly1;
	poly1.input();

	Polynomial poly2;
	poly2.input();

	Polynomial p3;
	p3 = poly1 * poly2;
	p3.Print();
	p3 - 4;		// Evaluation
	
	


}
