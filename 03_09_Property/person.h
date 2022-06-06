#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ getName WRITE setName)
public:
    explicit Person(QObject *parent = nullptr);

    QString getName() const{
        return m_name;
    }

    void setName(const QString &n){
        m_name = n;
        emit nameChanged(n);
    }

signals:
    void nameChanged(const QString &n);

public slots:

private:
    QString m_name;
};

#endif // PERSON_H
