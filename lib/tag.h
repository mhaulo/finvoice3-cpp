#ifndef TAG_H
#define TAG_H

#include <string>
#include <map>
#include <set>
#include <libxml++/libxml++.h>

class Tag
{
public:
    Tag();
    Tag(std::string name, short weight = 0);
    virtual ~Tag();

    bool operator==(const Tag &other) const;
    bool operator<(const Tag &other) const;

    std::string getName() const;
    std::map<std::string, std::string> getAttributes() const;
    std::string getAttribute(std::string key) const;

    void setAttribute(std::string key, std::string value);
    virtual void setValue(std::string value) = 0;
    void setWeight(short weight);

    void removeAttribute(std::string key);

    virtual bool isBlank() const = 0;
    virtual xmlpp::Element* toXml(xmlpp::Element* parent) const = 0;

    virtual Tag* findSubtag(const std::string name, bool recursive = false) const = 0;
    virtual bool hasSubtag(const std::string name) const;
    virtual std::multiset<Tag*> getSubtags() = 0;
    virtual void addSubtag(Tag* tag) = 0;

    virtual void compact();
    virtual void build(xmlpp::Element *element);

protected:
    std::string name;
    short weight;
    std::map<std::string, std::string> attributes;
};

#endif // TAG_H
