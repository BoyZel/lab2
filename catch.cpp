#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "graph.hpp"
	TEST_CASE(" Is BFS working correct? "){
		Graph < int > graph2;
		graph2.test();
		graph2.BFS(4);
		SECTION( " Are distances counted in a correct way?"){
			Node <int> *node = graph2.GetNode(0); 
			REQUIRE ( node->GetDistance() == 2 );
			node = graph2.GetNode(4);
			REQUIRE ( node->GetDistance() == 0 );
			node = graph2.GetNode(2);
			REQUIRE ( node->GetDistance() == 4 );
			node = graph2.GetNode(5);
			REQUIRE ( node->GetDistance() == 1 );
		}
		SECTION( " Are parents set in a correct way?"){
			Node <int> *node = graph2.GetNode(7); 
			REQUIRE ( node->GetParent() == 5 );
			node = graph2.GetNode(1);
			REQUIRE ( node->GetParent() == 0 );
			node = graph2.GetNode(2);
			REQUIRE ( node->GetParent() == 1 );
			node = graph2.GetNode(5);
			REQUIRE ( node->GetParent() == 4 );
		}
	}
