fun main() {
    val n = readLine()!!.toInt()
    val pureJuiceVolume = readLine()!!.split(" ").map { it.toInt() }.sum()

    println("${pureJuiceVolume.toDouble() / n}")
}