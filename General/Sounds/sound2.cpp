#include <iostream>
#include <windows.h>
#include <vector>

struct Note {
    int frequency;
    int duration;
};

void playNote(int frequency, int duration) {
    Beep(frequency, duration);
}

void playMelody(const std::vector<Note>& melody) {
    for (const auto& note : melody) {
        playNote(note.frequency, note.duration);
    }
}

int main() {
    // Define note frequencies
    const int C4 = 261;
    const int D4 = 293;
    const int E4 = 329;
    // ... Add more note frequencies as needed

    // Define note durations
    const int Quarter = 500;
    const int Eighth = 250;
    const int Sixteenth = 125;
    // ... Add more note durations as needed

    // Define the melody for "Dismantle" (replace with actual notes and durations)
    std::vector<Note> melody = {
        {G4, Quarter},
        {E4, Quarter},
        {C4, Quarter},
        {D4, Quarter},
        // ... Add more notes
    };

    // Play the melody
    playMelody(melody);

    return 0;
}

