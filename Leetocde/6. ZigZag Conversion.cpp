#include "stdafx.h"

class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 1)
		{
			return s;
		}
		int upside_offset = 0;
		int str_offset = 0;
		string StringBuf[numRows];
		int length =(int) s.length();
		for(str_offset;str_offset<length;str_offset++)
		{
			for (upside_offset; upside_offset<numRows; upside_offset++)
			{
					StringBuf[upside_offset].push_back(s[str_offset]);
					str_offset++;
			}
			while (upside_offset > 0)
			{
				upside_offset--;
				StringBuf[upside_offset].push_back(s[str_offset]);
				str_offset++;
			}
		}
		string result;
		for(int i=0;i<numRows;i++)
		{
			result.append(StringBuf[i]);
		}
		return  result;
	}
};
int main()
{
	Solution test;
	string str_test = "PAHNAPLSIIGYIR";
	string result = test.convert(str_test, 2);
	std::cout << result << std::endl;
	return 0;
}


