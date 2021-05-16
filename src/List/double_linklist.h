

typedef int Value;
typedef struct DoubleLink
{
	struct DoubleLink *next,*prev;
	Value value;
} DoubleLink;