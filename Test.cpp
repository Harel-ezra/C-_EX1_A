/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: HAREL
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input)
{
    std::erase(input, ' ');
    std::erase(input, '\t');
    std::erase(input, '\n');
    std::erase(input, '\r');
    return input;
}

TEST_CASE("Good snowman code")
{
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    /* Should print:
 _===_
 (.,.)
<( : )>
 ( : )
	*/

    CHECK(nospaces(snowman(22222222)) == nospaces("___\n.....\n(o.o)\n\( : )/\n("")"));
 /* Should print:
  ___ 
 .....
\(o.o)/
 (] [)
 (" ")
	*/

    CHECK(nospaces(snowman(33333333)) == nospaces("_\n/_\\n(O_O)\n/(> <)\\n(___)"));
/* Should print:
   _  
  /_\
 (O_O)
/(> <)\
 (___)
	*/
    CHECK(nospaces(snowman(44444444)) == nospaces("___\n(_*_)\n(- -)\n/(   )\\n(   )"));
/* Should print:
  ___ 
 (_*_)
 (- -)
 (   )
 (   )
	*/

    CHECK(nospaces(snowman(12341234)) == nospaces("_===_\n(O.-)\n<(> <)\\n(   )"));
/* Should print:
 _===_ 
 (O.-)
<(> <)\
 (   ) 
	*/
    CHECK(nospaces(snowman(12121212)) == nospaces("_===_\n(..o)/\n<( : )\n((" ")"));
/* Should print:
 _===_ 
 (..o)/
<( : )
 (" ") 
	*/

    CHECK(nospaces(snowman(34343434)) == nospaces("_\n/_\\n( (O -)\n/(> <)\n(   )"));
/* Should print:
   _  
  /_\
 (O -)
/(> <)
 (   ) 
	*/
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
/* Should print:
_===_
(.,.)
( : )
( : )
	*/
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    /* Should print:
_===_
(.,.)
( : )
( : )
	*/
    CHECK(nospaces(snowman(41234441)) == nospaces("\n(_*_)\n(o,0)\n(   )\n( : )"));
    /* Should print:

  ___
 (_*_)
 (o,0) 
 (   ) 
 ( : )
 */
    CHECK(nospaces(snowman(11223344)) == nospaces("_===_\n(o,o)\n/(   )\\n(   )"));
    /* Should print:

 _===_
 (o,o) 
/(   )\
 (   )
 */
    CHECK(nospaces(snowman(44332211)) == nospaces("___\n(_*_)\n\(0 0)/\n( : )\n( : )"));
    /*
  ___
 (_*_)
\(0 0)/
 ( : ) 
 ( : )
    */
    CHECK(nospaces(snowman(33222144)) == nospaces("_\n/_\\n\(o_o)\n(   )>\n(   )"));

    /*
   _
  /_\
\(o_o) 
 (   )>
 (   )
    */
}

TEST_CASE("Bad snowman code")
{
    CHECK_THROWS(snowman(12344445));
    CHECK_THROWS(snowman(111111111));
    CHECK_THROWS(snowman(123123123));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(-11114111));
    CHECK_THROWS(snowman(3123213));
}
