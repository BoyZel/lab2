#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "graph.hpp"
	TEST_CASE(" Is BFS working correct? "){
		Graph < int > graph2;
		graph2.test();
		graph2.BFS(4);
		SECTION( " Are distances counted in a correct way?"){
			REQUIRE ( graph2.GetDistance(0) == 2 );
			REQUIRE ( graph2.GetDistance(4) == 0 );
			REQUIRE ( graph2.GetDistance(2) == 4 );
			REQUIRE ( graph2.GetDistance(5) == 1 );
		}
		SECTION( " Are parents set in a correct way?"){
			REQUIRE ( graph2.GetParent(7) == 5 );
			REQUIRE ( graph2.GetParent(1) == 0 );
			REQUIRE ( graph2.GetParent(2) == 1 );
			REQUIRE ( graph2.GetParent(5) == 4 );
		}
	}
