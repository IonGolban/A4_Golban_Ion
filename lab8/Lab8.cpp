
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <queue>

struct cmp {
    bool operator()(std::pair<std::string, int> a, std::pair<std::string, int> b) {
        if (a.second == b.second) {
            return a.first > b.first; //lexic
        }
        return a.second < b.second;
    }
};

bool findDelim(char s, std::string exp) {
    for (auto del : exp) {
        if (del == s) return true;
    }
    return false;
}

void splitWords(std::string phrase,std::map<std::string, int>& mapOfWords) {
    int l = 0;

    std::string sub, delim = " .,?!";

    for (int i = 0; i < phrase.length(); i++)
    {
        char s = phrase.at(i);
        if (findDelim(s, delim)) {
            sub = phrase.substr(l, i - l);
            l = i + 1;
            if (sub.length() > 0) {
                mapOfWords[sub]++;
            }
        }
    }
}

void sortTheMapAndPrint(std::map<std::string, int>& map) {
    std::priority_queue<std::pair<std::string, int>, std::vector < std::pair<std::string, int>>, cmp > pq;
    
    for (auto& ij : map) {
        pq.push(ij);
    }

    while (!pq.empty()) {
        std::cout << pq.top().first << " => " << pq.top().second<<std::endl;
        pq.pop();
    }
}

int main()
{
    std::string phrase = "I bought an apple. Then I eat an apple. Apple is my favorite.";
    
    transform(phrase.begin(), phrase.end(), phrase.begin(), ::tolower);

    std::map<std::string, int> mapOfWords;


    splitWords(phrase, mapOfWords);

    sortTheMapAndPrint(mapOfWords);
    
    return 0;
}

