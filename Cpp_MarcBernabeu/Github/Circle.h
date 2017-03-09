

class Circle
{
private:
	float coorX;
	float coorY;
	float radio;

public:
	Circle(float a, float b, float r);
	~Circle();
	float GetRadio();
	float Area();
};