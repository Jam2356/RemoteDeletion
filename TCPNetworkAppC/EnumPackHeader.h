#ifndef ENUMPACKHEADER_H
#define ENUMPACKHEADER_H

#include <QDebug>

class PackHeader {
private:
    int value;

public:
    PackHeader(int value) {
        switch (value) {
        case 1: this->value = value; break;
        case 2: this->value = value; break;
        case 3: this->value = value; break;
        case 4: this->value = value; break;
        case 5: this->value = value; break;
        case 6: this->value = value; break;
        case 7: this->value = value; break;
        case 8: this->value = value; break;
        default:
            break;
        }
    };

    enum : int {
        //Send
        DeleteFile = 1,
        AdminMod = 2,
        DeleteClient = 7,

        //Server answer
        FileWasDelete = 3,
        FileNotDelete = 4,
        AdminNotAccess = 5,
        AdminModOn = 6,
        Info = 8

    };

    operator int() { //Научились int = PackHeader

        switch (int()) {
        case DeleteFile:        return 1; break;
        case AdminMod:          return 2; break;
        case FileWasDelete:     return 3; break;
        case FileNotDelete:     return 4; break;
        case AdminNotAccess:    return 5; break;
        case AdminModOn:        return 6; break;
        case DeleteClient:      return 7; break;
        case Info:              return 8; break;
        default:
            break;
        }

        return 8;
    }

    friend QDebug operator<<(QDebug os, PackHeader const & packHeader) { //Научились выводить packHeader в qDebug()
        return os << packHeader.value;
    }

    bool operator==(PackHeader other) { //Научились сравнивать PackHeader с PackHeader
        return this->value==other.value;
    }

    bool operator==(int value) { //Научились сравнивать PackHeader с int
        return this->value==value;
    }

};

#endif // ENUMPACKHEADER_H
