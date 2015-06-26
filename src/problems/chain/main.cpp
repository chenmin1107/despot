
#include "problems/problem_solver.h"

#include "chain.h"

using namespace std;


DSPOMDP* InitializeModel(option::Option* options) 
{

	DSPOMDP* model = NULL;

	model = !options[E_PARAMS_FILE] ?
				new Chain() : new Chain(options[E_PARAMS_FILE].arg);

	return model;
}


int main(int argc, char* argv[]) 
{
	argc -= (argc > 0);
	argv += (argc > 0); // skip program name argv[0] if present

	run(argc, argv);

	return 0;
}