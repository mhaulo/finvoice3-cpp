#ifndef TAG_H
#define TAG_H

#include <string>
#include <map>
#include <libxml++/libxml++.h>

class Tag
{
public:
    Tag();
    Tag(std::string name);
    virtual ~Tag();

    bool operator==(const Tag &other) const;

    std::string getName() const;
    std::map<std::string, std::string> getAttributes() const;
    std::string getAttribute(std::string key) const;

    void setAttribute(std::string key, std::string value);

    virtual bool isBlank() const = 0;
    virtual xmlpp::Element* toXml(xmlpp::Element* parent) const = 0;

protected:
    std::string name;
    std::map<std::string, std::string> attributes;
};

#endif // TAG_H
