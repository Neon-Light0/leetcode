class Solution {
private:
    std::unordered_map<long long, std::string> map1;
    std::unordered_map<std::string, long long> map2;
    int count = 1;
    std::string url = "http://tinyurl.com/";
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if (map2.contains(longUrl)){
            return url + std::to_string(map2[longUrl]);
        } else {
            map1[count] = longUrl;
            map2[longUrl] = count;
            return url + std::to_string(count++); 
        }
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int num = std::stoi(shortUrl.substr(url.size()));

        if (map1.contains(num)){
            return map1[num];
        } else {
            return "";
        }
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));