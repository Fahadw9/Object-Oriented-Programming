
class Operation
{
private:
	int a;
	int b;
public:
	int geta();
	int getb();
	void seta(int a);
	void setb(int b);
	Operation();
	Operation(int a, int b);
	inline void sum();
	inline void difference();
	inline void product();
	inline void division();
};