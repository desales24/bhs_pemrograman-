# Dictionary 

Kamus adalah tipe data dalam Python yang digunakan untuk menyimpan kumpulan data atau nilai dengan pendekatan "kunci-nilai". Kamus sendiri memiliki dua komponen inti: Pertama adalah kunci, yang merupakan nama atribut dari item dalam dictionary. Kedua adalah nilai, yang merupakan nilai yang disimpan dalam atribut.

Item dictionary memiliki 3 properti, yaitu:

Tidak Berurutan - tidak dalam urutan

* Dapat Diubah - bisa diubah

* Unik - tidak bisa menerima dua kunci yang sama

unodered meaning artinya tidak berurutan, jadi kunci atau atribut yang kita tentukan pertama, tidak berarti akan menjadi "pertama" dibandingkan dengan kunci lainnya. Selain itu, tidak berurutan berarti bahwa kita tidak dapat mengaksesnya menggunakan indeks (bilangan bulat) seperti halnya dengan daftar (list).

changeable artinya kita dapat mengubah nilai yang telah kita masukkan ke dalam dictionary. Ini berbeda dari tipe data set dan tuple, yang keduanya tidak dapat diubah atau tidak dapat diubah.

Dan yang terakhir adalah Unik, sebuah dictionary tidak dapat memiliki lebih dari satu kunci yang sama karena unik. Jadi jika dua kunci sama, kunci yang didefinisikan terakhir akan menimpa nilai kunci yang didefinisikan sebelumnya.

# a. Creat Dictionary Elements

Selanjutnya adalah cara membuat dictionary dalam Python. Untuk membuatnya, ada 2 cara:

* Pertama dengan kurung kurawal {}.

* Dan yang kedua dapat menggunakan fungsi atau konstruktor dict().

# contoh :

~~~
#first step

book = {

"title": "Fall Leaves Never Hate The Wind",

"Writer": "Tere Liye"

}

#second way

book = dict(

title="Fall Leaves Never Hate The Wind",
author-"Tere Liye" )
~~~

# b. ADD/Update Dict Elements

Untuk menambahkan kunci dan item baru, metodenya sama seperti mengedit item. Jadi: Jika kunci yang kita tentukan sudah ada, sistem akan mengganti item lama dengan yang baru, alias mengeditnya. Tetapi jika kunci yang kita tentukan tidak ada, sistem akan menambahkannya sebagai item baru.

Contoh:

~~~
python
student = {
    'name': 'Lendis Fabri',
    'origin': 'Indonesia'
}

# output None
print('Hobi:', student.get('hobi'))

# menambahkan data
student['hobi'] = 'Memancing'

# mencetak ulang
print('Hobi dari {} adalah {}'.format(
    student.get('name'), student.get('hobi')
))
~~~

Output:
~~~~
Hobi: None
Hobi dari Lendis Fabri adalah Memancing
~~~~

# c. Delete Dict Elements

Ada dua cara untuk menghapus sebuah item:

* Menggunakan pernyataan del <dict[key]>.

* Menggunakan fungsi dictionary.pop().

Contoh:
~~~
python
student = {
    'name': 'Wahid Abdullah',
    'age': 18,
}
'origin': 'Indonesia'

del student['name']

student.pop('age')

student.pop('origin')
~~~
Perbedaannya adalah, jika kita menggunakan fungsi pop(), kita dapat mendapatkan nilai kembalian dari data yang dihapus.

Contoh:
~~~
python
short_message = {
    "content": "PESAN INI HANYA BISA DIBACA SEKALI!!"
}

pesan_isi = short_message.pop('content')

# akses langsung dari kamus
# output: None
print('isi pesan:', short_message.get('content'))

# akses ke nilai yang disimpan kembali
print('isi pesan:', pesan_isi)
~~~
Output:
~~~
isi pesan: None
isi pesan: PESAN INI HANYA BISA DIBACA SEKALI!!
~~~