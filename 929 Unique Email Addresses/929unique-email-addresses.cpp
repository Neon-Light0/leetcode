class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
       std::unordered_set<std::string> set;
        
        for (const std::string& email : emails){
            std::size_t i = email.find('@');
            std::string localName = email.substr(0, i);
            std::string domainName = email.substr(i, email.size() - i);
            std::string correctedLocalName;
            
            for (const char& c : localName){
                if (c == '+') break;
                
                if (c == '.') continue;
                
                correctedLocalName += c;
            }
            
            set.insert(correctedLocalName + domainName);
        }
        
        return set.size();
    }
};