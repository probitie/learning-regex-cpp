#include <iostream>
#include <iterator>
#include <string>
#include <regex>

using namespace std;

int main()
{
    regex exp(".o.");
    smatch res;

    string str = "Some people, when confronted with a problem, think "
                 "\"I know, I'll use regular expressions.\" "
                 "Now they have two problems.";

    string::const_iterator searchStart( str.cbegin() );
    while ( regex_search( searchStart, str.cend(), res, exp ) )
    {
        cout << ( searchStart == str.cbegin() ? "" : " " ) << res[0];
        searchStart = res.suffix().first;
    }
    cout << endl;
}
